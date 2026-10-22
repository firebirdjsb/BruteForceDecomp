/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D21C96770AA8933BFE51C5863821A496DB786C65264404BE44FD06DEAD436345
 * Entry: 0x001215e0, Ghidra index: 3654, label: FUN_001215e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001215e0(void)

{
  byte *pbVar1;
  char cVar2;
  int in_EAX;
  
  cVar2 = (**(code **)(*(int *)(*(int *)(in_EAX + 0x2e8) + 0x110) + 0x20))();
  if (cVar2 != '\0') {
    if (*(int *)(in_EAX + 0x1ec) == 7) {
      (**(code **)(*(int *)(*(int *)(in_EAX + 0x2e8) + 0x110) + 0x3c))(*(int *)(in_EAX + 0x2e8));
    }
    FUN_0014a880();
    (**(code **)(*(int *)(*(int *)(in_EAX + 0x2e8) + 0x110) + 0x34))(1);
  }
  *(undefined1 *)(in_EAX + 0x7e8) = 0;
  *(undefined4 *)(in_EAX + 0x1ec) = 0;
  pbVar1 = (byte *)(*(int *)(in_EAX + 0x2e8) + 0x1c8);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}
