/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94B4DBCFD7AEA58E5D3A442916AE760ED830D08FF340E3644E62CF9997F33F29
 * Entry: 0x0010e500, Ghidra index: 3512, label: FUN_0010e500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */
extern int FUN_0006ef00(void);
undefined4 FUN_0010e500(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 7) & 1) != 0) {
    if (in_ECX[6] != 0) {
      (**(code **)(*in_ECX + 0x130))();
    }
    if ((*(byte *)(in_ECX + 7) & 1) != 0) {
      if (in_ECX[6] != 0) {
        iVar1 = FUN_0006ef00();
        *(undefined4 *)(*(int *)(iVar1 + 0xfc) + 0x74) = 0x3e4ccccd;
      }
      if (((*(byte *)(in_ECX + 7) & 1) != 0) && (in_ECX[6] != 0)) {
        return 1;
      }
    }
  }
  return 0;
}
