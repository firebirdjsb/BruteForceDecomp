/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E598D5C3DC8788A9BB6BF2B5F2AE4357B40544B85704141369E08E446A6075F5
 * Entry: 0x002ec2a0, Ghidra index: 10656, label: _raise
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7170;
extern uint32_t DAT_003b7174;
extern uint32_t DAT_003b717c;
extern uint32_t DAT_0040f4f8;
extern uint32_t DAT_0040f4fc;
extern uint32_t DAT_0040f500;
extern uint32_t DAT_0040f504;
extern uint32_t DAT_0040f550;
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2003 Release */

int __cdecl _raise(int __sig)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  iVar1 = __sig;
  if (__sig == 2) {
    puVar2 = &DAT_0040f4f8;
    pcVar5 = DAT_0040f4f8;
  }
  else if (((__sig == 4) || (__sig == 8)) || (__sig == 0xb)) {
    iVar3 = _siglookup();
    puVar2 = (undefined4 *)(iVar3 + 8);
    pcVar5 = (code *)*puVar2;
  }
  else if (__sig == 0xf) {
    puVar2 = &DAT_0040f504;
    pcVar5 = DAT_0040f504;
  }
  else if (__sig == 0x15) {
    puVar2 = &DAT_0040f4fc;
    pcVar5 = DAT_0040f4fc;
  }
  else {
    if (__sig != 0x16) {
      return -1;
    }
    puVar2 = &DAT_0040f500;
    pcVar5 = DAT_0040f500;
  }
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    puVar2 = (undefined4 *)FUN_002eba2f(3);
  }
  iVar3 = DAT_0040f550;
  if (((__sig == 8) || (__sig == 0xb)) || (iVar4 = __sig, __sig == 4)) {
    DAT_0040f550 = 0;
    iVar4 = iVar3;
    if (__sig == 8) {
      __sig = DAT_003b717c;
      DAT_003b717c = 0x8c;
      goto LAB_002ec360;
    }
LAB_002ec38c:
    *puVar2 = 0;
    if (iVar1 != 8) {
      (*pcVar5)(iVar1);
      if ((iVar1 != 0xb) && (iVar1 != 4)) {
        return 0;
      }
      goto LAB_002ec3af;
    }
  }
  else {
LAB_002ec360:
    if (iVar1 != 8) goto LAB_002ec38c;
    if (DAT_003b7170 < DAT_003b7174 + DAT_003b7170) {
      puVar2 = (undefined4 *)(DAT_003b7170 * 0xc + 0x3b7100);
      iVar3 = (DAT_003b7174 + DAT_003b7170) - DAT_003b7170;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  (*pcVar5)(8,DAT_003b717c);
LAB_002ec3af:
  if (iVar1 == 8) {
    DAT_003b717c = __sig;
  }
  DAT_0040f550 = iVar4;
  return 0;
}
