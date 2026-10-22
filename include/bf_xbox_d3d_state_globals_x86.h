/* Source-observed Brute Force Xbox D3D render-state globals.
 * These are recovered 32-bit scalar *source-draft* identities, NOT
 * validated Xbox storage addresses or native PC render-state bindings.
 * Observed consumers: D3DDevice_SetRenderState_* recovered C drafts
 * near 0x00370420, 0x00370890, 0x00370A60, 0x00372D90.
 *
 * No values, data bytes, addresses or runtime implementations supplied.
 * A C11 syntax pass cannot validate the original DWORD stores/reads,
 * device state transitions, pointer widths or x86 calling conventions.
 */
#ifndef BF_XBOX_D3D_STATE_GLOBALS_X86_H
#define BF_XBOX_D3D_STATE_GLOBALS_X86_H
#include <stdint.h>
extern uint32_t D3D8__D3DRS_MultiSampleMode;
extern uint32_t D3D8__D3DRS_MultiSampleRenderTargetMode;
extern uint32_t D3D8__D3DRS_TwoSidedLighting;
extern uint32_t D3D8__D3DRS_StencilCullEnable;
extern uint32_t D3D8__D3DRS_OcclusionCullEnable;
extern uint32_t D3D8__D3DRS_StencilEnable;
extern uint32_t D3D8__D3DRS_StencilFail;
#endif
