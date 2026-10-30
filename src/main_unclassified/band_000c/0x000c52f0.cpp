/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8B63945993F81B3C055EA28785897256CBB445F7D412E839B42A0A0963CB234
 * Entry: 0x000c52f0, Ghidra index: 2426, label: FUN_000c52f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00123ea0(void);

void FUN_000c52f0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  in_ECX[0x1d] = 0;
  iVar2 = (**(code **)(*in_ECX + 0x30))();
  if (iVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX[0x2a] + 0x5a4) + 0xc))();
    if ((cVar1 != '\0') && (*(int *)(in_ECX[0x2a] + 0x1f8) != 8)) {
      FUN_00123ea0();
    }
  }
  return;
}
