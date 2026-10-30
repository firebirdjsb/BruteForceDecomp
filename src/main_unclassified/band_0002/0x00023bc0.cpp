/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48FB23E247212A52F3908ECF52A34C176B303A79032BACE59DD2E51A3F805FFD
 * Entry: 0x00023bc0, Ghidra index: 242, label: FUN_00023bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00023bc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_EDX;
  
  uVar1 = *(undefined4 *)(in_EDX + 0x74);
  uVar2 = *(undefined4 *)(in_EDX + 0x68);
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  *in_EAX = uVar2;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  in_EAX[3] = uVar1;
  return;
}
