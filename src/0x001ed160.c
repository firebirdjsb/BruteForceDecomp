/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6F8D6DAFC7D409BDC1E5F39ADD12F21D7923012CFC7A17B10E318E9985ECB1C
 * Entry: 0x001ed160, Ghidra index: 6925, label: FUN_001ed160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ed160(void)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  if (*(int *)(in_EAX + 0x1c) != 0) {
    *(undefined1 *)(in_EAX + 0x20) = 1;
    piVar2 = (int *)(in_EAX + 0xac);
    iVar4 = 4;
    do {
      if (*piVar2 != 9) {
        FUN_001ed550();
      }
      piVar2 = piVar2 + 0xb;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    cVar1 = FUN_002e5880();
    if (cVar1 != '\0') {
      iVar4 = 1;
      pcVar3 = (char *)(in_EAX + 0x5648);
      do {
        if (*pcVar3 != '\0') {
          FUN_001ed6f0();
        }
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x18;
      } while (iVar4 < 4);
      FUN_002e5d90(0);
    }
    FUN_002e7280(1);
    FUN_001ec070();
    *(undefined1 *)(in_EAX + 0x20) = 0;
  }
  return;
}
