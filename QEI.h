/*
 * QEI.h
 *
 *  Created on: Feb 23, 2019
 *      Author: Jordan Hardy
 */

#ifndef QEI_H_
#define QEI_H_

int statehandler(int state,int pst,int a);
extern int click_cnt1;
extern int click_cnt2;
void init(void);
void init2(void);
int QEI_Init(void);
extern int ocTimeOutB = 0;
#endif /* QEI_H_ */
