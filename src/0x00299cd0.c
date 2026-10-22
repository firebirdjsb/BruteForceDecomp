/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 738F3E90B00560293C057D7168DA8EDB3ED8020C88324BCC9506377BA45FCD03
 * Entry: 0x00299cd0, Ghidra index: 9393, label: FUN_00299cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299cd0(void)

{
  undefined4 *unaff_EDI;
  
  switch(*unaff_EDI) {
  case 0:
    FUN_00299580(0xf,unaff_EDI[1],1);
    *unaff_EDI = 4;
    unaff_EDI[1] = 0;
    return;
  case 1:
    FUN_00299580(0xd,unaff_EDI[1],1);
    *unaff_EDI = 4;
    unaff_EDI[1] = 0;
    return;
  case 2:
    FUN_00299580(0x12,unaff_EDI[1],0);
    *unaff_EDI = 4;
    unaff_EDI[1] = 0;
    return;
  case 3:
    FUN_00299600(0x10);
    *unaff_EDI = 4;
    unaff_EDI[1] = 0;
    return;
  case 4:
    FUN_00299b70();
  }
  *unaff_EDI = 4;
  unaff_EDI[1] = 0;
  return;
}
