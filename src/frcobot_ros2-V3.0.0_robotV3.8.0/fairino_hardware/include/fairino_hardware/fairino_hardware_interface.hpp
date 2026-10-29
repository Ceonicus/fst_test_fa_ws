#ifndef _FR_HARDWARE_INTERFACE_
#define _FR_HARDWARE_INTERFACE_

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/macros.hpp"
#include <hardware_interface/hardware_info.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "visibility_control.h"
#include <vector>
#include "libfairino/include/robot.h"
#include <mutex>
#include <memory>
#include "/home/fst/test_fa_ws/src/rg75_300_gripper/src/gripper_config.hpp"  // For gripper constants

bool gripper_activated_ = false;  // Gripper activation status

// Constants (if not in gripper_config.hpp)
constexpr double MAX_FINGER_POS = 0.04;  // Max finger displacement (radians)

// #include "rg75_300_gripper/srv/gripper_command.hpp"


#define CONTROLLER_IP_ADDRESS "192.168.58.2"

namespace fairino_hardware
{

class FairinoHardwareInterface: public hardware_interface::SystemInterface{
public:
  RCLCPP_SHARED_PTR_DEFINITIONS(FairinoHardwareInterface)

  FAIRINO_HARDWARE_PUBLIC
  hardware_interface::CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;

  //FAIRINO_HARDWARE_PUBLIC
  //hardware_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State &) override;

  FAIRINO_HARDWARE_PUBLIC
  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;
  
  FAIRINO_HARDWARE_PUBLIC
  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;
  
  FAIRINO_HARDWARE_PUBLIC
  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
  
  FAIRINO_HARDWARE_PUBLIC
  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;
  
  // hardware_interface::return_type prepare_command_mode_switch(
  //   const std::vector<std::string> & start_interfaces,
  //   const std::vector<std::string> & stop_interfaces) override;
  // hardware_interface::return_type perform_command_mode_switch(
  //   const std::vector<std::string>& start_interfaces,
  //   const std::vector<std::string>& stop_interfaces) override;

  FAIRINO_HARDWARE_PUBLIC
  hardware_interface::return_type read(const rclcpp::Time & time, const rclcpp::Duration & period) override;
  
  FAIRINO_HARDWARE_PUBLIC
  hardware_interface::return_type write(const rclcpp::Time & time, const rclcpp::Duration & period) override;
  
private:
  double _jnt_position_command[8];
  double _jnt_velocity_command[8];
  double _jnt_torque_command[8];
  double _jnt_position_state[8];
  double _jnt_velocity_state[8];
  double _jnt_torque_state[8];
  int _control_mode;
  int sdk_pos;
  int prev_sdk_pos;
  int feed_back_pose;
  std::string _controller_ip = CONTROLLER_IP_ADDRESS;

  /* test start */
  // std::shared_ptr<rclcpp::Node> node_;
  // std::mutex sdk_mutex_;
  // rclcpp::Service<rg75_300_gripper::srv::GripperCommand>::SharedPtr gripper_srv_;
  /* test end */
  FRRobot _ptr_robot;
  uint8_t prev_gripper_pos = 20;

  // std::unique_ptr<FRRobot> _ptr_robot;
};

} //end namespace


#endif