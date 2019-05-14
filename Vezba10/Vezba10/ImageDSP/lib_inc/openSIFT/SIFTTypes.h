#ifndef _SIFT_TYPES_H_
#define _SIFT_TYPES_H_

#include <list>
namespace ezsift
{
#define DEGREE_OF_DESCRIPTORS (128)
	typedef struct SiftKeypoint {
		int octave;   // octave number
		int layer;    // layer number
		float rlayer; // real number of layer number

		float r;     // normalized row coordinate
		float c;     // normalized col coordinate
		float scale; // normalized scale

		float ri;          // row coordinate in that layer.
		float ci;          // column coordinate in that layer.
		float layer_scale; // the scale of that layer

		float ori; // orientation in degrees.
		float mag; // magnitude

		float descriptors[DEGREE_OF_DESCRIPTORS];
	} SiftKeypoint;


	typedef std::list<SiftKeypoint> SiftKeypointList;
}
#endif