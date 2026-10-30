/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E32CE4E0C5DDDFBE301C9A3DF6DEB4100C2634FA430965BBDB5131B413F84FD
 * Entry: 0x00087d20, Ghidra index: 1628, label: FUN_00087d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined1 FUN_000d56c0(int param_1,char *param_2,undefined4 param_3);

undefined4 FUN_00087d20(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x40) == 0) {
    iVar3 = 0;
  }
  else if (*(uint *)(unaff_ESI + 0x44) < 0x10) {
    iVar3 = unaff_ESI + 0x30;
  }
  else {
    iVar3 = *(int *)(unaff_ESI + 0x30);
  }
  if (*(uint *)(unaff_ESI + 0x28) < 0x10) {
    iVar2 = unaff_ESI + 0x14;
  }
  else {
    iVar2 = *(int *)(unaff_ESI + 0x14);
  }
  cVar1 = FUN_000d56c0(*(undefined4 *)(unaff_ESI + 8),iVar2,iVar3);
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_ESI + 0xc) = 1;
    return 0x80004005;
  }
  return 0;
}
