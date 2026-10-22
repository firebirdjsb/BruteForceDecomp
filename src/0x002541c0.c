/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02037701BDBB67B1FC3F3B703E2AFFF1BFCDA9260AA1B8E2640292131327EFC8
 * Entry: 0x002541c0, Ghidra index: 8407, label: FUN_002541c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
int FUN_002541c0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0x18);
  puVar1 = (undefined4 *)(in_ECX + 0x18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *puVar1 = 0;
  }
  iVar3 = (**(code **)(*DAT_004432fc + 0x18))(DAT_004432fc,1,param_1,puVar1,0);
  if (iVar3 == 0) {
    (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1);
  }
  return iVar3;
}
