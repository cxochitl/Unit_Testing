#include "pch.h"
#include "Smart_Conv.c"


/*First, test velocity*/
/*Upper limit*/
TEST(test_velocity_case, HexToVelocityMax) {
	EXPECT_NEAR(40.0F, hex_to_vel(0x28), 0.01);
}

/*Out of upper limit*/
TEST(test_velocity_case, HexToVelocityOutUpperLimit) {
	EXPECT_NEAR(40.0F, hex_to_vel(0x2A0), 0.01);
}

/*Lower limit*/
TEST(test_velocity_case, HexToVelocityLow) {
	EXPECT_NEAR(0.0F, hex_to_vel(0x00), 0.01);
}

/*Out of lower limit*/
TEST(test_velocity_case, HexToVelocityOutLowerLimit) {
	EXPECT_NEAR(0.0F, hex_to_vel(-0x200), 0.01);
}

/*With letters*/
TEST(test_velocity_case, HexToVelocityLetter) {
	EXPECT_NEAR(10.0F, hex_to_vel(0xA), 0.01);
}

/*With incorrect input*/
TEST(test_velocity_case, HexToVelocityDecimal) {
	EXPECT_NEAR(3.0F, hex_to_vel(3.6), 0.01);
}

/*Second, test angle*/
/*Upper limit*/
TEST(test_angle_case, HexToAngleMax) {
	EXPECT_NEAR(360.0F, hex_to_angle(0x168), 0.01);
}

/*Out of upper limit*/
TEST(test_angle_case, HexToAngleOutUpperLimit) {
	EXPECT_NEAR(360.0F, hex_to_angle(0x200), 0.01);
}

/*Lower limit*/
TEST(test_angle_case, HexToAngleLow) {
	EXPECT_NEAR(0.0F, hex_to_angle(0x00), 0.01);
}

/*Out of lower limit*/
TEST(test_angle_case, HexToAngleOutLowerLimit) {
	EXPECT_NEAR(0.0F, hex_to_angle(-0x20A), 0.01);
}

/*With letters*/
TEST(test_angle_case, HexToAngleLetter) {
	EXPECT_NEAR(171.0F, hex_to_angle(0xAB), 0.01);
}

/*With incorrect input*/
TEST(test_angle_case, HexToAngleDecimal) {
	EXPECT_NEAR(183.0F, hex_to_angle(183.6), 0.01);
}

/*With incorrect input
TEST(test_angle_case, HexToAngleDecimal) {
	EXPECT_NEAR(183.0F, hex_to_angle(183.6), 0.01);
}*/
