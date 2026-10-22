/* Opaque Visual Studio 2003/Xbox CRT stream pointer type.
 *
 * The recovered C drafts in src/0x00289010.c, src/0x0028aeb0.c and
 * src/0x002ee515.c use FILE* only as pointer storage or forwarding.
 * These callers do not establish the original CRT structure layout.
 *
 * This is deliberately NOT host stdio.h FILE and supplies NO fields,
 * allocation, I/O behavior, bytes or linkage. The 32-bit Xbox CRT
 * calling conventions and stream state must be recovered independently
 * before any portable PC runtime or native CRT adapter can be trusted.
 */
#ifndef BF_XBOX_CRT_STREAM_OPAQUE_H
#define BF_XBOX_CRT_STREAM_OPAQUE_H
typedef struct BF_XBOX_CRT_STREAM_LAYOUT_UNVERIFIED FILE;
#endif
