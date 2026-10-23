/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C50E078393D39602B68D723A7DFE14B718EEFF536FBC8C581999930B589F123
 * Entry: 0x0014db60, Ghidra index: 4376, label: FUN_0014db60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014db60(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  
  if ((*(int *)(in_EAX + 0x1c0) == 10) && (*(int *)(in_EAX + 0x1c4) == -1)) {
    FUN_0014da70();
  }
  if (((*(int *)(in_EAX + 0x1b8) != *(int *)(in_EAX + 0x1c0)) ||
      (*(int *)(in_EAX + 0x1bc) != *(int *)(in_EAX + 0x1c4))) &&
     ((~*(byte *)(in_EAX + 0x1c8) & 1) != 0)) {
    *(undefined4 *)(in_EAX + 0x1b8) = *(undefined4 *)(in_EAX + 0x1c0);
    *(undefined4 *)(in_EAX + 0x1bc) = *(undefined4 *)(in_EAX + 0x1c4);
  }
  if ((*(int *)(in_EAX + 0x1b8) != 10) || (*(int *)(in_EAX + 0x1bc) != -1)) {
    iVar2 = FUN_0014dae0();
    if ((iVar2 != 0) && (iVar2 = FUN_0014dae0(), *(short *)(iVar2 + 0x1a) != 0)) {
      cVar1 = FUN_0014d680(*(undefined4 *)(in_EAX + 0x1b8),*(undefined4 *)(in_EAX + 0x1bc));
      if (cVar1 != '\0') {
        return;
      }
      if (*(int *)(in_EAX + 0x1b8) == 1) {
        *(undefined4 *)(in_EAX + 0x1b8) = 0;
        *(undefined4 *)(in_EAX + 0x1bc) = 0xffffffff;
      }
      FUN_0014da70();
      return;
    }
    *(undefined4 *)(in_EAX + 0x1b8) = 10;
    *(undefined4 *)(in_EAX + 0x1bc) = 0xffffffff;
    *(undefined4 *)(in_EAX + 0x1c0) = 10;
    *(undefined4 *)(in_EAX + 0x1c4) = 0xffffffff;
  }
  return;
}
