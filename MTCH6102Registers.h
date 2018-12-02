/*
  @
  @   Date               :        02.12.2018 / Sunday
  @
  @   Contact            :        Writing by Muhammet Rasit KIYAK                    @https://www.linkedin.com/in/mrstkyk/
  @                        
  @   License            :        GNU AFFERO GENERAL PUBLIC LICENSE v3 
  @                               
  @   Description        :        This Library for MTCH6102 Capacitive Touch Controller from MICROCHIP
  @                               Dependency library is HAL for STM32 series (__STM32xxx_HAL_I2C_H)
  @
*/


#ifndef      _MTCH6102Registers_H
#define      _MTCH6102Registers_H

	#ifndef     __STM32L0xx_HAL_I2C_H
	#define     __STM32L0xx_HAL_I2C_H
	#endif	

#define MTCH6102_DeviceID 0x25<<1

typedef enum MTCH6102_Core  {
	MTCH6102__FW_MAJOR = 0x00,		// Default Value 0x02
	MTCH6102__FW_MINOR,				// Default Value 0x00
	MTCH6102__APP_ID_H,				// Default Value 0x00
	MTCH6102__APP_ID_L,				// Default Value 0x12
	MTCH6102__CMD,					// Default Value 0x00
	MTCH6102__MODE,					// Default Value 0x03
	MTCH6102__MODE_CON,				// Default Value 0x00
} MTCH6102_Core_Ram_Memory;

typedef enum MTCH6102_Touch
 {
	MTCH6102__TOUCH_STATE = 0x10,	// Default Value 0x00
	MTCH6102__TOUCH_X,		    	// Default Value 0x00
	MTCH6102__TOUCH_Y,		        // Default Value 0x00
	MTCH6102__TOUCH_LSB,			// Default Value 0x00
	MTCH6102__GESTURE_STATE,		// Default Value 0x00
	MTCH6102__GESTURE_DIAG			// Default Value 0x00
} MTCH6102_Touch_Ram_Memory;

typedef enum MTCH6102_Compensation{
	MTCH6102__SENSOR_COMP_RX0 = 0x50,
	MTCH6102__SENSOR_COMP_RX1,
	MTCH6102__SENSOR_COMP_RX2,
	MTCH6102__SENSOR_COMP_RX3,
	MTCH6102__SENSOR_COMP_RX4,
	MTCH6102__SENSOR_COMP_RX5,
	MTCH6102__SENSOR_COMP_RX6,
	MTCH6102__SENSOR_COMP_RX7,
	MTCH6102__SENSOR_COMP_RX8,
	MTCH6102__SENSOR_COMP_RX9,
	MTCH6102__SENSOR_COMP_RX10,
	MTCH6102__SENSOR_COMP_RX11,
	MTCH6102__SENSOR_COMP_RX12,
	MTCH6102__SENSOR_COMP_RX13,
	MTCH6102__SENSOR_COMP_RX14,
} MTCH6102_Compensation_Ram_Memory;

typedef enum MTCH6102_Acquisition{
	MTCH6102__SENSOR_VALUE_RX0 = 0x80,
	MTCH6102__SENSOR_VALUE_RX1,
	MTCH6102__SENSOR_VALUE_RX2,
	MTCH6102__SENSOR_VALUE_RX3,
	MTCH6102__SENSOR_VALUE_RX4,
	MTCH6102__SENSOR_VALUE_RX5,
	MTCH6102__SENSOR_VALUE_RX6,
	MTCH6102__SENSOR_VALUE_RX7,
	MTCH6102__SENSOR_VALUE_RX8,
	MTCH6102__SENSOR_VALUE_RX9,
	MTCH6102__SENSOR_VALUE_RX10,
	MTCH6102__SENSOR_VALUE_RX11,
	MTCH6102__SENSOR_VALUE_RX12,
	MTCH6102__SENSOR_VALUE_RX13,
	MTCH6102__SENSOR_VALUE_RX14,
	
	MTCH6102__RAW_VALUE_RX0_L = 0x90,
	MTCH6102__RAW_VALUE_RX0_H,
	MTCH6102__RAW_VALUE_RX1_L,
	MTCH6102__RAW_VALUE_RX1_H,
	MTCH6102__RAW_VALUE_RX2_L,
	MTCH6102__RAW_VALUE_RX2_H,
	MTCH6102__RAW_VALUE_RX3_L,
	MTCH6102__RAW_VALUE_RX3_H,
	MTCH6102__RAW_VALUE_RX4_L,
	MTCH6102__RAW_VALUE_RX4_H,
	MTCH6102__RAW_VALUE_RX5_L,
	MTCH6102__RAW_VALUE_RX5_H,
	MTCH6102__RAW_VALUE_RX6_L,
	MTCH6102__RAW_VALUE_RX6_H,
	MTCH6102__RAW_VALUE_RX7_L,
	MTCH6102__RAW_VALUE_RX7_H,
	MTCH6102__RAW_VALUE_RX8_L,
	MTCH6102__RAW_VALUE_RX8_H,
	MTCH6102__RAW_VALUE_RX9_L,
	MTCH6102__RAW_VALUE_RX9_H,
	MTCH6102__RAW_VALUE_RX10_L,
	MTCH6102__RAW_VALUE_RX10_H,
	MTCH6102__RAW_VALUE_RX11_L,
	MTCH6102__RAW_VALUE_RX11_H,
	MTCH6102__RAW_VALUE_RX12_L,
	MTCH6102__RAW_VALUE_RX12_H,
	MTCH6102__RAW_VALUE_RX13_L,
	MTCH6102__RAW_VALUE_RX13_H,
	MTCH6102__RAW_VALUE_RX14_L,
	MTCH6102__RAW_VALUE_RX14_H,
	
	MTCH6102__BASE_VALUE_RX0_L = 0xB0,
	MTCH6102__BASE_VALUE_RX0_H,
	MTCH6102__BASE_VALUE_RX1_L,
	MTCH6102__BASE_VALUE_RX1_H,
	MTCH6102__BASE_VALUE_RX2_L,
	MTCH6102__BASE_VALUE_RX2_H,
	MTCH6102__BASE_VALUE_RX3_L,
	MTCH6102__BASE_VALUE_RX3_H,
	MTCH6102__BASE_VALUE_RX4_L,
	MTCH6102__BASE_VALUE_RX4_H,
	MTCH6102__BASE_VALUE_RX5_L,
	MTCH6102__BASE_VALUE_RX5_H,
	MTCH6102__BASE_VALUE_RX6_L,
	MTCH6102__BASE_VALUE_RX6_H,
	MTCH6102__BASE_VALUE_RX7_L,
	MTCH6102__BASE_VALUE_RX7_H,
	MTCH6102__BASE_VALUE_RX8_L,
	MTCH6102__BASE_VALUE_RX8_H,
	MTCH6102__BASE_VALUE_RX9_L,
	MTCH6102__BASE_VALUE_RX9_H,
	MTCH6102__BASE_VALUE_RX10_L,
	MTCH6102__BASE_VALUE_RX10_H,
	MTCH6102__BASE_VALUE_RX11_L,
	MTCH6102__BASE_VALUE_RX11_H,
	MTCH6102__BASE_VALUE_RX12_L,
	MTCH6102__BASE_VALUE_RX12_H,
	MTCH6102__BASE_VALUE_RX13_L,
	MTCH6102__BASE_VALUE_RX13_H,
	MTCH6102__BASE_VALUE_RX14_L,
	MTCH6102__BASE_VALUE_RX14_H,
	
	MTCH6102__RAW_ADC_00 = 0xD0,
	MTCH6102__RAW_ADC_01,
	MTCH6102__RAW_ADC_02,
	MTCH6102__RAW_ADC_03,
	MTCH6102__RAW_ADC_04,
	MTCH6102__RAW_ADC_05,
	MTCH6102__RAW_ADC_06,
	MTCH6102__RAW_ADC_07,
	MTCH6102__RAW_ADC_08,
	MTCH6102__RAW_ADC_09,
	MTCH6102__RAW_ADC_10,
	MTCH6102__RAW_ADC_11,
	MTCH6102__RAW_ADC_12,
	MTCH6102__RAW_ADC_13,
	MTCH6102__RAW_ADC_14,
	MTCH6102__RAW_ADC_15,
	MTCH6102__RAW_ADC_16,
	MTCH6102__RAW_ADC_17,
	MTCH6102__RAW_ADC_18,
	MTCH6102__RAW_ADC_19,
	MTCH6102__RAW_ADC_20,
	MTCH6102__RAW_ADC_21,
	MTCH6102__RAW_ADC_22,
	MTCH6102__RAW_ADC_23,
	MTCH6102__RAW_ADC_24,
	MTCH6102__RAW_ADC_25,
	MTCH6102__RAW_ADC_26,
	MTCH6102__RAW_ADC_27,
	MTCH6102__RAW_ADC_28,
	MTCH6102__RAW_ADC_29,
	MTCH6102__RAW_ADC_30,
	MTCH6102__RAW_ADC_31
} MTCH6102_Acquisition_Ram_Memory;

typedef enum MTCH6102_Configuration{
	MTCH6102__NUMBER_OF_X_CHANNELS = 0x20,	// Default Value 0x09
	MTCH6102__NUMBER_OF_Y_CHANNELS,			// Default Value 0x06
	MTCH6102__SCAN_COUNT,					// Default Value 0x06
	MTCH6102__TOUCH_THRESH_X,				// Default Value 0x37
	MTCH6102__TOUCH_THRESH_Y,				// Default Value 0x28
	MTCH6102__ACTIVE_PERIOD_L,				// Default Value 0x85
	MTCH6102__ACTIVE_PERIOD_H,				// Default Value 0x02
	MTCH6102__IDLE_PERIOD_L,				// Default Value 0x4C
	MTCH6102__IDLE_PERIOD_H,				// Default Value 0x06
	MTCH6102__IDLE_TIMEOUT,					// Default Value 0x10
	MTCH6102__HYSTERESIS,					// Default Value 0x04
	MTCH6102__DEBOUNCE_UP,					// Default Value 0x01
	MTCH6102__DEBOUNCE_DOWN,				// Default Value 0x01
	MTCH6102__BASE_INTERVAL_L,				// Default Value 0x0A
	MTCH6102__BASE_INTERVAL_H,				// Default Value 0x00
	MTCH6102__BASE_POS_FILTER,				// Default Value 0x14
	MTCH6102__BASE_NEG_FILTER,				// Default Value 0x14
	MTCH6102__FILTER_TYPE,					// Default Value 0x02
	MTCH6102__FILTER_STRENGTH,				// Default Value 0x01
	MTCH6102__BASE_FILTER_TYPE,				// Default Value 0x01
	MTCH6102__BASE_FILTER_STRENGTH,			// Default Value 0x05
	MTCH6102__LARGE_ACTIVATION_THRESH_L,	// Default Value 0x00
	MTCH6102__LARGE_ACTIVATION_THRESH_H,	// Default Value 0x00
	MTCH6102__HORIZONTAL_SWIPE_DISTANCE,	// Default Value 0x40
	MTCH6102__VERTICAL_SWIPE_DISTANCE,		// Default Value 0x40
	MTCH6102__SWIPE_HOLD_BOUNDARY,			// Default Value 0x19
	MTCH6102__TAP_DISTANCE,					// Default Value 0x19
	MTCH6102__DISTANCE_BETWEEN_TAPS,		// Default Value 0x40
	MTCH6102__TAP_HOLD_TIME_L,				// Default Value 0x32
	MTCH6102__TAP_HOLD_TIME_H,				// Default Value 0x09
	MTCH6102__GESTURE_CLICK_TIME,			// Default Value 0x0C
	MTCH6102__SWIPE_HOLD_THRESH,			// Default Value 0x20
	MTCH6102__MIN_SWIPE_VELOCITY,		    // Default Value 0x04
	MTCH6102__HORIZONTAL_GESTURE_ANGLE,	    // Default Value 0x2D
	MTCH6102__VERTICAL_GESTURE_ANGLE,	    // Default Value 0x2D
	MTCH6102__I2CADDR					    // Default Value 0x25
} MTCH6102_Configuration_Ram_Memory;



#endif




