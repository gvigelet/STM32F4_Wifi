/* 
 * File:   wifi_module.h
 * Author: r0rshark
 *
 * Created on 3 gennaio 2014, 17.29
 */

#ifndef WIFI_MODULE_H
#define	WIFI_MODULE_H

void invia(int num_passi);
void *wifi_start(void *arg);
void *wifi_receive(void *arg);

#endif	/* WIFI_MODULE_H */

