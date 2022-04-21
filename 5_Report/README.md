# SEAT_HEATING_SYSTEM

The buttons have to be switched on before the app starts working. Potentiometer acts as temperature sensor. It gives signal which is converted by ADC and used to make a PWM signal pf corresponding duty cycle, as seen in the oscilloscope. As potentiometer is varied, message containing detected temperature is shown in serial monitor.

|Feature_Id|Feature|
|:--------:|:---------:|
|F_01|Tests if button is on or not|
|F_02|Converts the binary to adc |
|F_03|Displays the temperature on the serial monitor|

4W'S and 1-H
*   What- This is a seat heating system.
*   Why- This is helpful in soothe aching backs and shoulders
*   Where- It can be used for back pains suffers find that turning on their heated seats.
*   When- The heated seats can actually conserve energy(gas) you might not need the heater on at all if you have heated your seats.
*   How- It will also dissipate some heat into air ,warming the vehicle as a whole.


# Swot Analysis
STRENGTHS

*   It's user friendly.
*   We can easily change the temperature.
*   Low cost

WEAKNESS

*   It's applicable to countries which are having low temperature.

OPPURTUNITIES

*   It can be implemented by replacing heater with AC

THREATS

*   Not suitable for high temperature places.  

## Detail requirements
### High Level Requirements
| High Level Requirements      | Description |
| ----------- | ----------- |
| HLR1      | Microcontroller   |
| HLR2   | Temperature Sensor|
| HLR3   | Heat Generation|
| HLR4   | Display|
| HLR5   | Software |

### Low Level Requirements
| Low Level Requirements      | Description |
| ----------- | ----------- |
| HLR1_LLR1      | ATmega328     |
| HLR2_LLR1   | LM35 and ADC|
| HLR2_LLR2   | ADC with PWM-fast|
| HLR3_LLR1   |LCD and LED|
| HLR4_LLR1   | Code Blocks with AVR GCC compiler |
| HLR5_LLR2   | SimulIDE |

*   ACTIVITY
![activity](https://user-images.githubusercontent.com/101094751/164243917-1e728103-d811-4877-b72a-4358b188d443.png)

*   CONDITIONS
![condtion](https://user-images.githubusercontent.com/101094751/164243958-8ce6b071-8fe2-4ab8-b14a-7feee5d2e480.png)
