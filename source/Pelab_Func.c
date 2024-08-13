// TI File $Revision: Pelab_Func.c
// Checkin $Date: August 11, 2014
//###########################################################################
//
// FILE:   Pelab_Func.c
//
// TITLE:  Functions for Dual Current Control.
//
//###########################################################################
// $TI Release: DSP2833x/DSP2823x Header Files V1.20 $
// $Release Date: August 11, 2014 $
//###########################################################################

#include "DSP2833x_Device.h"     // Headerfile Include File
#include "DSP2833x_Examples.h"   // Examples Include File
#include "DSP2833x_GlobalPrototypes.h"
#include <math.h>

//---------------------------------------------------------------------------
// Declare each Function:
//---------------------------------------------------------------------------


//////////////////////////////////////////////////////////////////MSC,GSC 변수명 구분///////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////MSC Idss_ref,Idss,Iqss_ref,Iqss,Ides_ref,Iqes_ref,Ide,Iqe,Vqss_ref,Vdss_ref</////////////////////////////////
///////////////////////////////////GSC Ids_ref,Ids,Iqs_ref,Iqs,Ide_ref,Iqe_ref,Ide,Iqe,Vqs_ref,Vds_ref//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////소스코드 설명/////////////////////////////////////////////////////////////////
////////////////Pelab_Func.c에 모든 제어 함수문 삽입되어 있음. 추가시 Func.c에 추가한 후 DSP2833x_DefaultIsr.c에서 콜할것///////////////////////
//새로운 변수 추가할경우 DSP28333x_GlobalVariableDefs.c에 추가한후 Include 파일에  DSP28333x_GlobalPrototypes.h에도 외부변수 선언해줄것/////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InitParameter()
{
	Ra = 0.3;
	La = 0.002;
	Wcc = 2 * PI * 20.0;
	Kp = La * Wcc;
	Ki = Ra * Wcc;
	Ka = 1.0 / Kp;
	Vdc = 12.0;
	duty_ref = 0.5;

	J = 3.517e-5;

	Ke = 0.0277;
	Kt = 0.0277;

	Ia_ref_time = 1.0;

	Ia_ref_amp = 0.0;
}

//===========================================================================
// End of file.
//===========================================================================

