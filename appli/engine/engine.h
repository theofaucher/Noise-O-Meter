/*
 * engine.h
 *
 *  Created on: 13 Feb 2022
 *      Author: Théo
 */

#ifndef ENGINE_ENGINE_H_
#define ENGINE_ENGINE_H_

#include "../utils/vector.h"

typedef enum {
	NOISE_silent,
	NOISE_group,
	NOISE_pooling
} noise_level_e;

typedef struct {
	uint8_t silent_threeshold;
	uint8_t group_threeshold;
	uint8_t pooling_threeshold;
	noise_level_e noise_level;
	vector_t *body;
	vector_t *noze;
	vector_t *noise;
	vector_t *start;
} engine_t;

#endif /* ENGINE_ENGINE_H_ */
