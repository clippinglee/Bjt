/*****************************************************************************************************************
******************************************************************************************************************
*  Copyright (C) .                                                                            
*  All rights reserved.                                                                                           
******************************************************************************************************************
*  FileName: BJT                                                                                             
*  Content:  BJT family drive
*  Category: 
******************************************************************************************************************
*  Revision Management                                                                                            
*  yyyy.mm.dd    name              version      description                                                       
*  ----------    --------          -------      -----------------------------------                               
*  2022.04.18    clipping            v0001        Frist edit                                                        
******************************************************************************************************************
******************************************************************************************************************/
/* Include Headerfiles  */
#ifndef _BJT_TYPES_H_
#define _BJT_TYPES_H_
#include "Std_Types.h"

typedef enum
{
    BJT_DIO,
    BJT_PWM
}Bjt_InputChnType;


#define BJT_DIO_PWM_INVALIDVAL                       (0xFFu)



#endif
