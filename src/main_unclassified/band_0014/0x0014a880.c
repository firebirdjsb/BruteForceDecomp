/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68F7ADFC53154D3AE758F79B1F4D2D4EC39D8859CC68207D608F4910C16E38C1
 * Entry: 0x0014a880, Ghidra index: 4297, label: FUN_0014a880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014a880(void)

{
  char cVar1;
  int in_EAX;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = (int)*(char *)(in_EAX + 0x1b8);
  if (unaff_EBX != iVar2) {
    if ((-1 < iVar2) && (iVar2 < 3)) {
      cVar1 = FUN_0014a840();
      if (cVar1 != '\0') {
        FUN_0014a780(iVar2 <= unaff_EBX);
        FUN_0014a610();
        *(char *)(in_EAX + 0x1b9) = (char)unaff_EBX;
        return;
      }
      FUN_0014a610();
    }
    *(char *)(in_EAX + 0x1b9) = (char)unaff_EBX;
  }
  return;
}
