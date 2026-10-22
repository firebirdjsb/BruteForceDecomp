/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 833E08B044C713D46344500DBC0951B52D860FDDB510CE974DE6EEFECD74FA93
 * Entry: 0x00371190, Ghidra index: 13377, label: FUN_00371190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dfd4;
undefined4 * FUN_00371190(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_EDX;
  
  uVar2 = 0x100001;
  if (D3D8__D3DRS_YuvEnable != 0) {
    uVar2 = 0x10100001;
  }
  if (DAT_0037dfd4 == 2) {
    uVar2 = uVar2 | 0x10000;
  }
  if ((*(int *)(param_1 + 0x15b8) != 0) &&
     ((((cVar1 = *(char *)(*(int *)(param_1 + 0x15b8) + 0xd), cVar1 == '-' || (cVar1 == '+')) ||
       (cVar1 == '1')) || (cVar1 == '/')))) {
    uVar2 = uVar2 | 0x1000;
  }
  *in_EDX = 0x40290;
  in_EDX[1] = uVar2;
  return in_EDX + 2;
}
