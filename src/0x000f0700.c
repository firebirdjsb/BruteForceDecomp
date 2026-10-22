/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7694F960E5C209E9C1ADDD4195C2767D9C0D52F6290F67041403623F132575F
 * Entry: 0x000f0700, Ghidra index: 3001, label: FUN_000f0700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_000f0700(void)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int *unaff_ESI;
  bool bVar5;
  
  iVar3 = **(int **)(DAT_00469b58 + 8);
  uVar1 = FUN_00102000();
  pbVar2 = (byte *)(**(code **)(iVar3 + 0x130))(uVar1);
  if (pbVar2 == (byte *)0x0) {
    return false;
  }
  iVar3 = (**(code **)(*unaff_ESI + 4))();
  if (iVar3 == 3) {
    FUN_0010c890();
  }
  bVar5 = (*pbVar2 & 2) != 0;
  if (bVar5) {
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar4 + 4))(unaff_ESI[1]);
  }
  return bVar5;
}
