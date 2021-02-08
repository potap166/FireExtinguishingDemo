
#ifndef  __COMMUNIC_RING_FUNC_PUBLIC_H
#define  __COMMUNIC_RING_FUNC_PUBLIC_H


void Init_Port_Ring_Direction   ( void )                                        ;
void Set_Ring_Direction         ( const RingDir_t RingDir )                     ;
RingDir_t Get_Ring_Direction    ( void )                                        ;
void Togle_Ring_Direction       ( void )                                        ;
RingDir_t Get_Last_Working_Direction ( const uint8_t num )                      ;

#endif