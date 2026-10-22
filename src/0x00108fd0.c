/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15DFDD279585CBF2C9662C9DF98B6ABAC65A269AB6FADEF645EA2B0825E88892
 * Entry: 0x00108fd0, Ghidra index: 3395, label: FUN_00108fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00108fd0(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int unaff_ESI;
  
  if (in_EAX != (int *)0x0) {
    iVar2 = (**(code **)(*in_EAX + 4))();
    if (iVar2 == 7) {
      cVar1 = FUN_00107dd0();
      if (cVar1 != '\0') {
        cVar1 = FUN_00106a80();
        if (cVar1 != '\0') {
          FUN_00106b10();
          FUN_001036d0();
          *(int **)(unaff_ESI + 0x2c + *(int *)(unaff_ESI + 0x10) * 4) = in_EAX;
          *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
        }
      }
    }
  }
  return;
}
