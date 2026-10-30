/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 929E45459DADEDCB09EA637FE54D98960492558E54EE63B66E4AECDB851DE3B5
 * Entry: 0x002f84dd, Ghidra index: 10949, label: XMemFree
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XMemFree(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x80000000) == 0) {
    LocalFree(param_1);
  }
  else {
    XPhysicalFree();
  }
  return;
}
