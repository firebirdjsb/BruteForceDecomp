/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 379B43248B1DB7734516CBE34FF3B71249CEB0E75905F1D604FD6FAB97FF73B7
 * Entry: 0x00371fa0, Ghidra index: 13389, label: CDevice_KickOff_0__LTCG_edx1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd30;
extern uint32_t DAT_0037dd40;
extern uint32_t DAT_0037dd80;
extern uint32_t PTR_DAT_00400700;
void D3D8LTCG__CDevice_KickOff_0__LTCG_edx1(void)

{
  int iVar1;
  uint *in_EDX;
  int extraout_EDX;
  uint uVar2;
  
  if ((in_EDX[2] & 4) == 0) {
    uVar2 = *in_EDX;
  }
  else {
    uVar2 = in_EDX[0xd6];
  }
  if ((in_EDX[2] & 0x2000) == 0) {
    FUN_00372180();
    *(uint *)(*(int *)(extraout_EDX + 0x17c0) + 0x40) = uVar2 & 0xfffffff;
    if (DAT_0037bd30 != 0) {
      iVar1 = *(int *)(D3D8__D3D_g_pDevice + 0x4f8);
      do {
        do {
        } while (*(int *)(iVar1 + 0x3240) != *(int *)(iVar1 + 0x3244));
      } while (*(int *)((int)&PTR_DAT_00400700 + iVar1) != 0);
      *(uint *)(extraout_EDX + 8) = *(uint *)(extraout_EDX + 8) | 0x2000;
      return;
    }
  }
  else {
    DAT_0037dd80 = *in_EDX & 0xfffffff;
    in_EDX[0x5f0] = (uint)&DAT_0037dd40;
    *(uint *)(in_EDX[0x5f0] + 0x44) = DAT_0037dd80;
    *(uint *)in_EDX[0xc] = in_EDX[0xb] - 2;
    in_EDX[0x661] = in_EDX[0x806];
    in_EDX[0x7f8] = in_EDX[0xf];
  }
  return;
}
