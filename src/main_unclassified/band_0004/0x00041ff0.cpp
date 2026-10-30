/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A531145D550F825A6155529AF8114AB70F4F725C335386B18B5BA3E7EEB02660
 * Entry: 0x00041ff0, Ghidra index: 501, label: FUN_00041ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

void FUN_00041ff0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar3 = FUN_000120f0();
  if (((iVar3 != 0) && (*(int *)(unaff_ESI + 0x934) != 0)) &&
     ((*(int *)(unaff_ESI + 0x938) - *(int *)(unaff_ESI + 0x934)) / 0x18 != 0)) {
    local_4 = *(int *)(unaff_ESI + 0x940) + 1;
    if (*(int *)(unaff_ESI + 0x934) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = (*(int *)(unaff_ESI + 0x938) - *(int *)(unaff_ESI + 0x934)) / 0x18;
    }
    piVar4 = &local_4;
    if (local_8 <= local_4) {
      piVar4 = &local_8;
    }
    iVar7 = *piVar4;
    local_4 = *(int *)(unaff_ESI + 0x940) + 3;
    if (*(int *)(unaff_ESI + 0x934) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = (*(int *)(unaff_ESI + 0x938) - *(int *)(unaff_ESI + 0x934)) / 0x18;
    }
    piVar4 = &local_4;
    if (local_8 <= local_4) {
      piVar4 = &local_8;
    }
    iVar1 = *piVar4;
    if (3 < iVar1 - iVar7) {
      iVar5 = iVar7 * 0x18;
      iVar6 = iVar7 + 2;
      do {
        iVar2 = *(int *)(*(int *)(unaff_ESI + 0x934) + 0x14 + iVar5);
        if (((iVar2 != 0) &&
            (*(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1,
            *(int *)(iVar3 + 0x24c) == iVar2)) && (*(int *)(unaff_ESI + 0x940) != iVar7)) {
          *(int *)(unaff_ESI + 0x940) = iVar7;
          *(undefined4 *)(unaff_ESI + 0x948) = 0x7f7fffff;
          *(undefined4 *)(unaff_ESI + 0x954) = 0;
        }
        iVar2 = *(int *)(*(int *)(unaff_ESI + 0x934) + 0x2c + iVar5);
        if (((iVar2 != 0) &&
            (*(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1,
            *(int *)(iVar3 + 0x24c) == iVar2)) && (*(int *)(unaff_ESI + 0x940) != iVar6 + -1)) {
          *(int *)(unaff_ESI + 0x940) = iVar6 + -1;
          *(undefined4 *)(unaff_ESI + 0x948) = 0x7f7fffff;
          *(undefined4 *)(unaff_ESI + 0x954) = 0;
        }
        iVar2 = *(int *)(*(int *)(unaff_ESI + 0x934) + 0x44 + iVar5);
        if (((iVar2 != 0) &&
            (*(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1,
            *(int *)(iVar3 + 0x24c) == iVar2)) && (*(int *)(unaff_ESI + 0x940) != iVar6)) {
          *(int *)(unaff_ESI + 0x940) = iVar6;
          *(undefined4 *)(unaff_ESI + 0x948) = 0x7f7fffff;
          *(undefined4 *)(unaff_ESI + 0x954) = 0;
        }
        iVar2 = *(int *)(*(int *)(unaff_ESI + 0x934) + 0x5c + iVar5);
        if (((iVar2 != 0) &&
            (*(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1,
            *(int *)(iVar3 + 0x24c) == iVar2)) && (*(int *)(unaff_ESI + 0x940) != iVar6 + 1)) {
          *(int *)(unaff_ESI + 0x940) = iVar6 + 1;
          *(undefined4 *)(unaff_ESI + 0x948) = 0x7f7fffff;
          *(undefined4 *)(unaff_ESI + 0x954) = 0;
        }
        iVar2 = iVar6 + 5;
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 0x60;
        iVar6 = iVar6 + 4;
      } while (iVar2 < iVar1);
    }
    if (iVar7 < iVar1) {
      iVar6 = iVar7 * 0x18;
      do {
        iVar5 = *(int *)(*(int *)(unaff_ESI + 0x934) + 0x14 + iVar6);
        if (((iVar5 != 0) &&
            (*(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1,
            *(int *)(iVar3 + 0x24c) == iVar5)) && (*(int *)(unaff_ESI + 0x940) != iVar7)) {
          *(int *)(unaff_ESI + 0x940) = iVar7;
          *(undefined4 *)(unaff_ESI + 0x948) = 0x7f7fffff;
          *(undefined4 *)(unaff_ESI + 0x954) = 0;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x18;
      } while (iVar7 < iVar1);
    }
  }
  return;
}
