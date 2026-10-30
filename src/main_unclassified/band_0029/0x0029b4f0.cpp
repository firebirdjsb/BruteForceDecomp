/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 752FF463A01AACC18ADF17724B886C22215CB7406FD82043861D2142A0495BB5
 * Entry: 0x0029b4f0, Ghidra index: 9425, label: FUN_0029b4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029b4f0(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0x25) {
    uVar1 = FUN_00296110();
    *(undefined4 *)(in_ECX + 4) = uVar1;
    FUN_0029a3b0();
    FUN_00299a90();
    *in_EAX = 4;
    in_EAX[1] = 0;
    FUN_0029b570();
    return;
  }
  FUN_0029a3b0();
  FUN_00299900();
  FUN_0029b570();
  return;
}
