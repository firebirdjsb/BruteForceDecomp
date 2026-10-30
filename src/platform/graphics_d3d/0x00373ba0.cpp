/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADB52D398CBE5030EC3DCDE782FF12B4BA7BA18C79A8761A1BC2F8A9935593C6
 * Entry: 0x00373ba0, Ghidra index: 13416, label: FUN_00373ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00373c79;
extern uint32_t DAT_0037b790;
extern uint32_t switchD_00373bfa_caseD_2a[];
extern uint32_t switchD_00373bfa_caseD_2c[];
uint FUN_00373ba0(void)

{
  uint uVar1;
  int in_ECX;
  int unaff_ESI;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_00373c79)[*(byte *)(in_ECX + 0xd)]) {
  case 0:
    uVar1 = 1;
    goto LAB_00373bb7;
  case 1:
    uVar1 = 3;
    goto LAB_00373bb7;
  case 2:
    uVar1 = 8;
    goto LAB_00373bb7;
  case 3:
    uVar1 = 4;
LAB_00373bb7:
    uVar1 = uVar1 | (*(uint *)(in_ECX + 0xc) & 0xf00000 | 0x2000) >> 4 |
                    *(uint *)(in_ECX + 0xc) & 0xf000000;
    goto LAB_00373be3;
  case 4:
    uVar1 = 3;
    break;
  case 5:
    uVar1 = 8;
    break;
  case 6:
    uVar1 = 9;
    break;
  case 7:
    uVar1 = 10;
    break;
  case 8:
    uVar1 = 1;
    break;
  case 9:
    uVar1 = 4;
  }
  uVar1 = uVar1 | 0x100;
LAB_00373be3:
  if (unaff_ESI == 0) {
    if (((&DAT_0037b790)[*(byte *)(in_ECX + 0xd)] & 0x3c) == 0x20) {
switchD_00373bfa_caseD_2a:
      return uVar1 | 0x20;
    }
switchD_00373bfa_caseD_2c:
    return uVar1 | 0x10;
  }
  switch(*(undefined1 *)(unaff_ESI + 0xd)) {
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
    goto switchD_00373bfa_caseD_2a;
  case 0x2c:
  case 0x2d:
  case 0x30:
  case 0x31:
    goto switchD_00373bfa_caseD_2c;
  default:
    return uVar1;
  }
}
