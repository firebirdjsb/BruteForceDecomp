/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 173C8D3CB182A04A40A652E65EC159CC9E100E175810ED01714F0771371A606F
 * Entry: 0x0011c540, Ghidra index: 3619, label: FUN_0011c540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011c540(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  char local_30;
  int local_28;
  
  if (((*(int *)(param_1 + 0x59c) != 0) && (cVar5 = FUN_0005c0a0(), cVar5 != '\0')) &&
     ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x204);
    iVar2 = *(int *)(iVar1 + 0x3c);
    *(int *)(iVar1 + 0x3c) = iVar2 + 1;
    FUN_000d1420(0x40000000);
joined_r0x0011c5d5:
    if (local_28 != 0) {
      for (puVar6 = *(undefined4 **)(local_28 + 0x1c); puVar6 != (undefined4 *)0x0;
          puVar6 = (undefined4 *)*puVar6) {
        iVar3 = *(int *)((uint)*(ushort *)(puVar6 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if (((iVar3 != 0) &&
            (iVar4 = *(int *)(iVar3 + 0x18), *(int *)(iVar3 + 0x18) = iVar2, iVar4 != iVar2)) &&
           ((iVar4 = *(int *)(*(int *)(iVar3 + 0xc) + 4), iVar4 == 0x13 ||
            ((iVar4 == 0x18 || (iVar4 == 0x14)))))) {
          FUN_0011c170(param_1,iVar3,iVar2);
        }
      }
      do {
        cVar5 = FUN_000d14d0();
        if (cVar5 == '\0') {
          local_28 = 0;
          break;
        }
      } while (local_28 == 0);
      goto joined_r0x0011c5d5;
    }
    if (local_30 != '\0') {
      for (puVar6 = *(undefined4 **)(iVar1 + 0x2c); puVar6 != (undefined4 *)0x0;
          puVar6 = (undefined4 *)*puVar6) {
        iVar3 = *(int *)((uint)*(ushort *)(puVar6 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if (((iVar3 != 0) &&
            (iVar4 = *(int *)(iVar3 + 0x18), *(int *)(iVar3 + 0x18) = iVar2, iVar4 != iVar2)) &&
           ((iVar4 = *(int *)(*(int *)(iVar3 + 0xc) + 4), iVar4 == 0x13 ||
            ((iVar4 == 0x18 || (iVar4 == 0x14)))))) {
          FUN_0011c170(param_1,iVar3,iVar2);
        }
      }
    }
  }
  return;
}
