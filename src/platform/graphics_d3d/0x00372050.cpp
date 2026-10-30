/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEBF01DFDEECBEBCD09E17F114EACEE09C45CADFCFD56C6A417C8D51CA1279BF
 * Entry: 0x00372050, Ghidra index: 13390, label: FUN_00372050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_00400700;
void FUN_00372050(void)

{
  int iVar1;
  uint extraout_EDX;
  int unaff_ESI;
  
  if ((*(uint *)(unaff_ESI + 8) & 0x2000) == 0) {
    FUN_00372180();
    iVar1 = D3D8__D3D_g_pDevice;
    *(uint *)(*(int *)(unaff_ESI + 0x17c0) + 0x40) = extraout_EDX & 0xfffffff;
    iVar1 = *(int *)(iVar1 + 0x4f8);
    do {
      do {
      } while (*(int *)(iVar1 + 0x3240) != *(int *)(iVar1 + 0x3244));
    } while (*(int *)((int)&PTR_DAT_00400700 + iVar1) != 0);
  }
  return;
}
