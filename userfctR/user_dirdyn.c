/** ---------------------------
 * Robotran - MBsysC
 * 
 * Template file for direct dynamics module
 * 
 * This files enable the user to call custom at
 * specific places in the time simulation. It is a template
 * file that can be edited by the user.
 * 
 * (c) Universite catholique de Louvain
 *     
 */
#include "math.h"
#include "MBSdef.h"
#include "mbs_data.h"
#include "mbs_dirdyn.h"
#include "user_realtime.h"
#include "cpp_interface_gestion.h"
#include "robot_id.h"
#include "user_all_id.h"
#include "set_output.h"
#include <math.h>

#define DEG_TO_RAD (M_PI/180.0)
#define RAD_TO_DEG (180.0/M_PI)


/*! \brief user own initialization functions
 * 
 * \param[in,out] mbs_data data structure of the model
 * \param[in,out] mbs_dd general structure of the direct dynamic module (for advance users)
 *
 * For beginners, it is advised to only use the MbsData structure.
 * The field MbsDirdyn is provided for more advance users.
 */
void user_dirdyn_init(MbsData *mbs_data, MbsDirdyn *mbs_dd)
{
	simu_init(mbs_data);
}

/*! \brief user own loop functions
 * 
 * \param[in,out] mbs_data data structure of the model
 * \param[in,out] mbs_dd general structure of the direct dynamic module (for advance users)
 *
 * For beginners, it is advised to only use the MbsData structure.
 * The field MbsDirdyn is provided for more advance users.
 */
void user_dirdyn_loop(MbsData *mbs_data, MbsDirdyn *mbs_dd)
{
//    set_plot(mbs_data->q[FJ_T1_robot_Y_id] , "True X[m] Y") ;
//    set_plot(mbs_data->q[FJ_T2_robot_Y_id] , "True Y[m] Y") ;
	set_plot(mbs_data->q[FJ_T1_robot_W_id], "True X[m] W");
	set_plot(mbs_data->q[FJ_T2_robot_W_id], "True Y[m] W");

/*	  double truedist = sqrt((mbs_data->q[FJ_T1_robot_W_id]- mbs_data->q[FJ_T1_robot_B_id])*(mbs_data->q[FJ_T1_robot_W_id] - mbs_data->q[FJ_T1_robot_B_id])
		  + (mbs_data->q[FJ_T2_robot_B_id]- mbs_data->q[FJ_T2_robot_W_id])*(mbs_data->q[FJ_T2_robot_B_id] - mbs_data->q[FJ_T2_robot_W_id]));

	  set_plot(truedist, "True dist[m]");*/

	//our robot
  //  set_plot(mbs_data->q[FJ_T1_robot_B_id] , "True X[m]") ;
//	set_plot(mbs_data->q[FJ_T2_robot_B_id], "True Y[m]");
//	set_plot(mbs_data->q[FJ_R3_robot_B_id], "True Theta[rad]");


	simu_loop(mbs_data);
}

/*! \brief user own finishing functions
 * 
 * \param[in,out] mbs_data data structure of the model
 * \param[in,out] mbs_dd general structure of the direct dynamic module (for advance users)
 *
 * For beginners, it is advised to only use the MbsData structure.
 * The field MbsDirdyn is provided for more advance users.
 */
void user_dirdyn_finish(MbsData *mbs_data, MbsDirdyn *mbs_dd)
{
	simu_finish(mbs_data);
}
