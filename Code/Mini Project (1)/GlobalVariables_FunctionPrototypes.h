/***************************** Global Variables *****************************/

char choice; /* variable to store the decision of the user at the beginning of the program */
char sensor_choice; /* variable to store the decision of the user at the sensors set menu of the program */
float curr_room_temperature; /* variable to store the data of the current room temperature */
float curr_engine_temperature; /* variable to store the data of the current engine temperature */

/* state enum definition */
enum state
{
	OFF, ON
}; /* end enum state */

enum state engine_state = OFF; /* make a variable of type enum to store the engine state */
enum state ac_state = OFF; /* make a variable of type enum to store the AC state */
int vehicle_speed = 0; /* make a variable of type intger for the vehicle speed and initialize it with a random a value */
float room_temp = 25; /* make a variable of type float for the room temperature and initialize it with a random a value */
enum state etc_state = OFF; /* make a variable of type enum to store the ETC state */
float engine_temp = 125; /* make a variable of type float for the engine temperature and initialize it with a random a value */








/***************************** Functions Prototypes *****************************/

void get_the_user_choice(void); /* get the the user choice when needed */

void check_mainMENU_option(void); /* check which option at the beginning the user choose */

void sensors_set_menu(void); /* print the sensor set menu and let the user decide what to do */

void check_sensorMENU_option(void); /* check which option at the sensor menu the user choose */

void traffic_light(void); /* get the traffic light data and decide what to do */

void room_temperature(void); /* get the room temperature data and decide what to do */

void engine_temperature(void); /* get the engine_temperature data and decide what to do */

void speed_30_case(void); /* put proper values for the special case of the speed of 30 */

void adjust_AC(void); /* do the special case needed operations for AC */

void adjust_ETC(void); /* do the special case needed operations for ETC */

void print_state(void); /* print the state of the vehicle to the console */





