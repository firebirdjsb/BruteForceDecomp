/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7323FFCB594AA3574991AE5BDF1590797DD3160211AB21838D869FA1728BCAC
 * Entry: 0x00205a70, Ghidra index: 7290, label: FUN_00205a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00205a70(float param_1,float param_2)

{
  float *in_ECX;
  
  if (param_2 <= param_1) {
    if (*in_ECX <= param_1) {
      if (param_2 <= *in_ECX) {
        return;
      }
      *in_ECX = param_2;
      return;
    }
  }
  else if (param_1 <= *in_ECX) {
    if (*in_ECX <= param_2) {
      return;
    }
    *in_ECX = param_2;
    return;
  }
  *in_ECX = param_1;
  return;
}
