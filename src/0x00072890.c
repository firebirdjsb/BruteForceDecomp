/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7684AB89D778871B352D0FF8FCA56F7889D608187F6DB654EA22188285EE52EC
 * Entry: 0x00072890, Ghidra index: 1282, label: FUN_00072890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0048a820;
void FUN_00072890(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int in_EDX;
  int unaff_ESI;
  
  bVar1 = *(byte *)(in_EDX + 0x124);
  if ((char)(bVar1 << 1) < '\0') {
    uVar3 = 0;
    piVar4 = (int *)(unaff_ESI + 0x24);
    do {
      if (*piVar4 == 0) {
        *(byte *)(in_EDX + 0x124) = (bVar1 ^ (byte)uVar3) & 0x7f ^ bVar1;
        break;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < 4);
    cVar2 = *(char *)(in_EDX + 0x124) << 1;
    if (-1 < cVar2) {
      *(int *)(unaff_ESI + 0x24 + ((int)cVar2 >> 1) * 4) = in_EDX;
      *(undefined2 **)(in_EDX + 0x120) =
           &DAT_0048a820 + ((int)(char)(*(char *)(in_EDX + 0x124) << 1) >> 1) * 0x3600;
    }
  }
  return;
}
