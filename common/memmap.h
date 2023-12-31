/*
 * memmap.h
 *
 * Created: 8/26/2023 9:59:00 AM
 *  Author: khalifa
 */ 


#ifndef MEMMAP_H_
#define MEMMAP_H_



#define DDRA  (*(volatile unsigned char  *)0x3A)
#define PORTA (*(volatile unsigned char  *)0x3B)
#define PINA  (*(volatile unsigned char  *)0x39)


#define DDRB  (*(volatile unsigned char  *)0x37)
#define PORTB (*(volatile unsigned char  *)0x38)
#define PINB  (*(volatile unsigned char  *)0x36)


#define DDRD  (*(volatile unsigned char  *)0x31)
#define PORTD (*(volatile unsigned char  *)0x32)
#define PIND  (*(volatile unsigned char  *)0x30)


#define DDRC  (*(volatile unsigned char  *)0x34)
#define PORTC (*(volatile unsigned char  *)0x35)
#define PINC  (*(volatile unsigned char  *)0x33)



#endif /* MEMMAP_H_ */