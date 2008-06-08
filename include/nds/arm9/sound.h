/*---------------------------------------------------------------------------------

	Sound Functions

	Copyright (C) 2005
		Dave Murphy (WinterMute)

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any
	damages arising from the use of this software.

	Permission is granted to anyone to use this software for any
	purpose, including commercial applications, and to alter it and
	redistribute it freely, subject to the following restrictions:

	1.	The origin of this software must not be misrepresented; you
		must not claim that you wrote the original software. If you use
		this software in a product, an acknowledgment in the product
		documentation would be appreciated but is not required.
	2.	Altered source versions must be plainly marked as such, and
		must not be misrepresented as being the original software.
	3.	This notice may not be removed or altered from any source
		distribution.

---------------------------------------------------------------------------------*/
#ifndef _sound_h_
#define _sound_h_

#ifdef __cplusplus
extern "C" {
#endif

#include <nds/ipc.h>

typedef struct
{
   void *buffer;
   unsigned int length;
   unsigned int freq;
   fp halfFull;
   fp full;
}MicData;

int playSound( pTransferSoundData sound);
void setGenericSound( u32 rate, u8 vol, u8 pan, u8 format);
int playGenericSound(const void* data, u32 length);


#ifdef __cplusplus
}
#endif

#endif // _sound_h_
