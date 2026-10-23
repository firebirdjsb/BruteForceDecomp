/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 286F723373E19B1F7E76D31EEB66DEF024A4BC3581943F4687DA1D3E53A4B589
 * Entry: 0x002f8e00, Ghidra index: 10966, label: FUN_002f8e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x002f8e1b CALL EAX after loading [0x00412afc]; signature/host width ABI_UNVERIFIED. */
extern code *DAT_00412afc;
extern uint32_t DAT_00412b00;
int FUN_002f8e00(int param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  
  if ((param_1 == 0) || (param_1 == -1)) {
LAB_002f8e64:
    iVar1 = 0;
  }
  else {
    if (DAT_00412afc == (code *)0x0) {
LAB_002f8e2a:
      iVar1 = thunk_FUN_00237ea0(param_1 + 0x40);
      if (iVar1 == 0) goto LAB_002f8e64;
      cVar3 = '\0';
    }
    else {
      iVar1 = (*DAT_00412afc)(param_1 + 0x40);
      if (iVar1 == 0) goto LAB_002f8e2a;
      if (iVar1 == -1) goto LAB_002f8e64;
      cVar3 = '\x03';
    }
    bVar2 = 0x40 - ((byte)iVar1 & 0x1f);
    iVar1 = iVar1 + (uint)bVar2;
    *(byte *)(iVar1 + -1) = bVar2;
    *(char *)(iVar1 + -2) = cVar3;
    if (cVar3 == '\x03') {
      *(undefined4 *)(iVar1 + -8) = DAT_00412b00;
      return iVar1;
    }
  }
  return iVar1;
}
