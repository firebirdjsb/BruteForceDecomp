/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 772AB5247EE8155E52B4800D208D289A36FB7DD98FB2FF4CB191089B141626F6
 * Entry: 0x00289140, Ghidra index: 9123, label: FUN_00289140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s______00404c6c[];
extern uint32_t switchD_00289167_caseD_0[];
bool FUN_00289140(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar3 = unaff_ESI[3];
  unaff_ESI[0x104] = 0;
  while (iVar3 + 1U < 0x5f) {
    switch(iVar3 + 1U) {
    default:
      goto switchD_00289167_caseD_0;
    case 9:
    case 0xd:
    case 0x20:
      pcVar2 = (char *)unaff_ESI[2];
      if (pcVar2 < (char *)(unaff_ESI[1] + *unaff_ESI)) {
        unaff_ESI[3] = (int)*pcVar2;
        unaff_ESI[2] = (int)(pcVar2 + 1);
      }
      else {
        unaff_ESI[3] = -1;
      }
      break;
    case 10:
      *(char *)(unaff_ESI + 4) = (char)unaff_ESI[3];
      iVar3 = unaff_ESI[0x104];
      unaff_ESI[0x104] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 0x11 + (int)unaff_ESI) = 0;
      pcVar2 = (char *)unaff_ESI[2];
      if ((char *)(unaff_ESI[1] + *unaff_ESI) <= pcVar2) {
        unaff_ESI[3] = -1;
        return (bool)0x65;
      }
      cVar1 = *pcVar2;
      unaff_ESI[2] = (int)(pcVar2 + 1);
      unaff_ESI[3] = (int)cVar1;
      return (bool)0x65;
    case 0x3b:
      while (pcVar2 = (char *)unaff_ESI[2], pcVar2 < (char *)(*unaff_ESI + unaff_ESI[1])) {
        iVar3 = (int)*pcVar2;
        unaff_ESI[2] = (int)(pcVar2 + 1);
        unaff_ESI[3] = iVar3;
        if ((iVar3 == 10) || (iVar3 == -1)) goto LAB_002891b5;
      }
      unaff_ESI[3] = -1;
LAB_002891b5:
      unaff_ESI[0x104] = 0;
      break;
    case 0x3d:
      *(char *)(unaff_ESI + 4) = (char)unaff_ESI[3];
      iVar3 = unaff_ESI[0x104];
      unaff_ESI[0x104] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 0x11 + (int)unaff_ESI) = 0;
      pcVar2 = (char *)unaff_ESI[2];
      if ((char *)(unaff_ESI[1] + *unaff_ESI) <= pcVar2) {
        unaff_ESI[3] = -1;
        return (bool)4;
      }
      cVar1 = *pcVar2;
      unaff_ESI[2] = (int)(pcVar2 + 1);
      unaff_ESI[3] = (int)cVar1;
      return (bool)4;
    case 0x5b:
      *(char *)(unaff_ESI + 4) = (char)unaff_ESI[3];
      iVar3 = unaff_ESI[0x104];
      unaff_ESI[0x104] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 0x11 + (int)unaff_ESI) = 0;
      pcVar2 = (char *)unaff_ESI[2];
      if ((char *)(unaff_ESI[1] + *unaff_ESI) <= pcVar2) {
        unaff_ESI[3] = -1;
        return (bool)2;
      }
      cVar1 = *pcVar2;
      unaff_ESI[2] = (int)(pcVar2 + 1);
      unaff_ESI[3] = (int)cVar1;
      return (bool)2;
    case 0x5d:
      *(char *)(unaff_ESI + 4) = (char)unaff_ESI[3];
      iVar3 = unaff_ESI[0x104];
      unaff_ESI[0x104] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 0x11 + (int)unaff_ESI) = 0;
      pcVar2 = (char *)unaff_ESI[2];
      if ((char *)(unaff_ESI[1] + *unaff_ESI) <= pcVar2) {
        unaff_ESI[3] = -1;
        return (bool)3;
      }
      cVar1 = *pcVar2;
      unaff_ESI[2] = (int)(pcVar2 + 1);
      unaff_ESI[3] = (int)cVar1;
      return (bool)3;
    case 0xffffffff:
                    /* WARNING: This code block may not be properly labeled as switch case */
      return (bool)0x66;
    }
    iVar3 = unaff_ESI[3];
  }
switchD_00289167_caseD_0:
  do {
    *(char *)((int)unaff_ESI + unaff_ESI[0x104] + 0x10) = (char)unaff_ESI[3];
    pcVar2 = (char *)unaff_ESI[2];
    unaff_ESI[0x104] = unaff_ESI[0x104] + 1;
    if (pcVar2 < (char *)(unaff_ESI[1] + *unaff_ESI)) {
      unaff_ESI[3] = (int)*pcVar2;
      unaff_ESI[2] = (int)(pcVar2 + 1);
    }
    else {
      unaff_ESI[3] = -1;
    }
    iVar3 = FUN_002eb0b0(s______00404c6c,unaff_ESI[3]);
  } while ((iVar3 == 0) && (unaff_ESI[3] != -1));
  *(undefined1 *)((int)unaff_ESI + unaff_ESI[0x104] + 0x10) = 0;
  iVar3 = FUN_00234c90();
  return iVar3 == 0;
}
