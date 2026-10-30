/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68B2DE22D05B1E0B709D64B361984B7B249314812A33EEDBA1AD7D9AA7F0454A
 * Entry: 0x00087760, Ghidra index: 1620, label: FUN_00087760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_002f258a(void);
extern void FUN_00087810(int param_1,uint param_2,uint param_3);

bool FUN_00087760(void)

{
  uint uVar1;
  int in_EAX;
  char unaff_BL;
  uint unaff_EDI;
  
  if (0x7ffffffe < unaff_EDI) {
    FUN_002f258a();
  }
  uVar1 = *(uint *)(in_EAX + 0x18);
  if (uVar1 < unaff_EDI) {
    if (unaff_BL != '\0') {
      FUN_00087810(in_EAX,unaff_EDI,0);
      return unaff_EDI != 0;
    }
    FUN_00087810(in_EAX,unaff_EDI,*(undefined4 *)(in_EAX + 0x14));
    return unaff_EDI != 0;
  }
  if ((unaff_BL != '\0') && (unaff_EDI < 8)) {
    if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 0x18) = 7;
    *(undefined2 *)(in_EAX + 4) = 0;
    return unaff_EDI != 0;
  }
  if (unaff_EDI == 0) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
    if (7 < uVar1) {
      **(undefined2 **)(in_EAX + 4) = 0;
      return false;
    }
    *(undefined2 *)(in_EAX + 4) = 0;
  }
  return unaff_EDI != 0;
}
