import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import tkinter as tk

class TeleopNode(Node):
    def __init__(self):
        super().__init__('teleop_gui')

        # Variable to hold the dynamic linear velocity (range 0.1 to 0.5)
        self.linear_velocity = 0.0  # Default value at the lowest range
        self.angular_velocity = 0.0

        # Publisher for the /cmd_vel topic
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # Create the Twist message
        self.cmd_vel = Twist()

        # Create the GUI interface
        self.create_gui()

    def create_gui(self):
        # Create the main window
        self.root = tk.Tk()
        self.root.title("TurtleBot3 Teleoperation")

        # Set window size
        self.root.geometry("350x400")

        # Create a frame for better organization
        self.frame = tk.Frame(self.root)
        self.frame.grid(row=0, column=0, padx=10, pady=10)

        # Create linear velocity control buttons
        self.linear_up_button = tk.Button(self.frame, text="Forward", command=self.move_forward, height=2, width=10)
        self.linear_up_button.grid(row=0, column=1)

        self.stop_button = tk.Button(self.frame, text="Stop", command=self.stop_robot, height=2, width=10)
        self.stop_button.grid(row=1, column=1)

        self.linear_down_button = tk.Button(self.frame, text="Backward", command=self.move_backward, height=2, width=10)
        self.linear_down_button.grid(row=2, column=1)

        # Create angular velocity control buttons (rotation)
        self.angular_left_button = tk.Button(self.frame, text="Rotate Left", command=self.rotate_left, height=2, width=10)
        self.angular_left_button.grid(row=1, column=0)

        self.angular_right_button = tk.Button(self.frame, text="Rotate Right", command=self.rotate_right, height=2, width=10)
        self.angular_right_button.grid(row=1, column=2)

        # Create a label and slider for controlling linear velocity (forward/backward speed)
        self.linear_velocity_label = tk.Label(self.root, text="Linear Velocity (x):")
        self.linear_velocity_label.grid(row=1, column=0, pady=10)

        self.linear_velocity_slider = tk.Scale(self.root, from_=0.0, to_=0.4, orient="horizontal", resolution=0.01, command=self.update_linear_velocity)
        self.linear_velocity_slider.set(self.linear_velocity)  # Default slider position
        self.linear_velocity_slider.grid(row=2, column=0, pady=10)

        # Create a label and slider for controlling angular velocity (rotation speed)
        self.angular_velocity_label = tk.Label(self.root, text="Angular Velocity (z):")
        self.angular_velocity_label.grid(row=3, column=0, pady=10)

        self.angular_velocity_slider = tk.Scale(self.root, from_=-0.2, to_=0.2, orient="horizontal", resolution=0.01, command=self.update_angular_velocity)
        self.angular_velocity_slider.set(self.angular_velocity)  # Default slider position
        self.angular_velocity_slider.grid(row=4, column=0, pady=10)

        # Start the GUI loop in a separate thread
        self.root.after(100, self.publish_velocity)
        self.root.mainloop()

    def publish_velocity(self):
        # Publish the Twist message (linear and angular velocities)
        self.cmd_vel.linear.x = self.linear_velocity
        self.cmd_vel.angular.z = self.angular_velocity
        self.publisher_.publish(self.cmd_vel)

        # Keep calling the function every 100ms to update the robot's velocity
        self.root.after(100, self.publish_velocity)

    def move_forward(self):
        # Move forward by setting linear velocity within limit
        self.linear_velocity = 0.2  # Can be adjusted
        self.angular_velocity = 0.0

    def move_backward(self):
        # Move backward by setting negative linear velocity within limit
        self.linear_velocity = -0.2  # Can be adjusted
        self.angular_velocity = 0.0

    def rotate_left(self):
        # Rotate left by setting angular velocity within limit
        self.angular_velocity = 0.2
        self.linear_velocity = 0.0

    def rotate_right(self):
        # Rotate right by setting angular velocity within limit
        self.angular_velocity = -0.2
        self.linear_velocity = 0.0

    def stop_robot(self):
        # Stop the robot (linear and angular velocities set to zero)
        self.linear_velocity = 0.0
        self.angular_velocity = 0.0

    def update_linear_velocity(self, value):
        """Updates the linear velocity based on the slider value"""
        self.linear_velocity = float(value)

    def update_angular_velocity(self, value):
        """Updates the angular velocity based on the slider value"""
        self.angular_velocity = float(value)

def main():
    rclpy.init()
    teleop_node = TeleopNode()
    rclpy.spin(teleop_node)
    teleop_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
