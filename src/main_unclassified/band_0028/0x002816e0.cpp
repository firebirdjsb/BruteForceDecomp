/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7703232E525101AF127F9C96709BA1F87F180EF402A488B7F62DFCA18B9446D
 * Entry: 0x002816e0, Ghidra index: 9047, label: FUN_002816e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft signature only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00281630(void);
void FUN_002816e0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_EDX;
  int iVar4;
  
  *(undefined4 *)(in_EDX + 0x280c) = 0;
  if (in_EAX != 0) {
    iVar4 = *(int *)(*(int *)(in_EDX + 0x2824) + 0x1808);
    do {
      iVar1 = iVar4;
      iVar4 = 0;
      do {
        iVar2 = (uint)*(ushort *)(in_EDX + 4 + (iVar4 + in_EAX & 0x1ffU) * 2) -
                (uint)*(ushort *)(in_EDX + 4 + ((iVar1 - in_EAX) + iVar4 + in_EAX & 0x1ffU) * 2);
        if (iVar2 != 0) break;
        iVar2 = (uint)*(ushort *)(in_EDX + 4 + (iVar4 + 1 + in_EAX & 0x1ffU) * 2) -
                (uint)*(ushort *)(in_EDX + 4 + (iVar4 + 1 + iVar1 & 0x1ffU) * 2);
        if (iVar2 != 0) {
          iVar4 = iVar4 + 1;
          break;
        }
        iVar2 = (uint)*(ushort *)(in_EDX + 4 + (iVar4 + 2 + in_EAX & 0x1ffU) * 2) -
                (uint)*(ushort *)(in_EDX + 4 + (iVar4 + 2 + iVar1 & 0x1ffU) * 2);
        if (iVar2 != 0) {
          iVar4 = iVar4 + 2;
          break;
        }
        iVar4 = iVar4 + 3;
      } while (iVar4 < 0x81);
      if (*(int *)(in_EDX + 0x280c) <= iVar4) {
        *(int *)(in_EDX + 0x280c) = iVar4;
        *(int *)(in_EDX + 0x2808) = iVar1;
        if (0x80 < iVar4) {
          FUN_00281630();
          return;
        }
      }
      if (iVar2 < 0) {
        piVar3 = (int *)(*(int *)(in_EDX + 0x2824) + 4 + iVar1 * 0xc);
      }
      else {
        piVar3 = (int *)(*(int *)(in_EDX + 0x2824) + 8 + iVar1 * 0xc);
      }
      iVar4 = *piVar3;
    } while (*piVar3 != 0);
    *piVar3 = in_EAX;
    iVar4 = in_EAX * 0xc;
    *(int *)(iVar4 + *(int *)(in_EDX + 0x2824)) = iVar1;
    *(undefined4 *)(*(int *)(in_EDX + 0x2824) + 4 + iVar4) = 0;
    *(undefined4 *)(*(int *)(in_EDX + 0x2824) + 8 + iVar4) = 0;
  }
  return;
}
