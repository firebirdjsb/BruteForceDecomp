/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF16B9EEB921AE8615D28E619B823E851E8A66E950844445AC21811F37BB6BDE
 * Entry: 0x0033d414, Ghidra index: 12581, label: FUN_0033d414
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033d414(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(in_ECX + 0x14) == 1) goto LAB_0033d4f5;
  iVar1 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x18));
  *(int *)(in_ECX + 0x2c) = iVar1;
  if (iVar1 != 0) {
    if (-1 < iVar1) {
      if (*(int *)(in_ECX + 0x14) == 4) {
        *(undefined4 *)(in_ECX + 0x14) = 1;
      }
      if (*(int *)(in_ECX + 0x14) == 2) {
        if ((uint)(*(int *)(*(int *)(in_ECX + 0x10) + 0x834) -
                  *(int *)(*(int *)(in_ECX + 0x10) + 0x82c)) < 4) {
          *(undefined4 *)(in_ECX + 0x14) = 1;
          goto LAB_0033d4a0;
        }
        iVar2 = FUN_0033c7d5(0);
        if (-1 < iVar2) {
          iVar2 = *(int *)(in_ECX + 0x10) + 0x84c;
          *(int *)(in_ECX + 0x18) = iVar2;
          iVar2 = FUN_0033d113(*(undefined4 *)(in_ECX + 0x1c),iVar2);
          if (-1 < iVar2) {
            *(undefined4 *)(in_ECX + 0x2c) = 0;
            *(undefined4 *)(in_ECX + 0x14) = 4;
            goto LAB_0033d4a0;
          }
        }
LAB_0033d4c4:
        FUN_0033d24c();
      }
      else {
LAB_0033d4a0:
        if (*(int *)(in_ECX + 0x14) == 1) {
          iVar2 = FUN_0033c7d5(1);
          if (-1 < iVar2) {
            iVar2 = FUN_0033c1e8(*(undefined4 *)(in_ECX + 0x1c));
            if (-1 < iVar2) {
              FUN_0033d172(*(undefined4 *)(*(int *)(in_ECX + 0x1c) + 8),
                           *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x10));
              goto LAB_0033d4df;
            }
          }
          goto LAB_0033d4c4;
        }
      }
LAB_0033d4df:
      if (-1 < iVar2) goto LAB_0033d4e9;
      *(int *)(in_ECX + 0x2c) = iVar2;
    }
    *(undefined4 *)(in_ECX + 0x14) = 1;
  }
LAB_0033d4e9:
  if (*(int *)(in_ECX + 0x14) == 1) {
    FUN_0033bcdc();
  }
LAB_0033d4f5:
  return *(undefined4 *)(in_ECX + 0x2c);
}
