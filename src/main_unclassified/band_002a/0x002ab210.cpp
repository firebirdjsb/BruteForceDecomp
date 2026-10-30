/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06B8EA4D37EDA8D80281BD37510AC475C244FAF3F82DC164F80A316DF8E88A70
 * Entry: 0x002ab210, Ghidra index: 9663, label: FUN_002ab210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
#include <string.h>
float10 FUN_002ab210(int *param_1)

{
  int *node;
  int *child;
  float sample;
  float maximum = 0.0f;

  /* 0x2ab226 passes the address of the original four-byte stack
   * parameter slot as an output word. It initially contains the guest
   * pointer argument and retains prior call output on later iterations.
   * This low-DWORD host copy is only a source view; pointer relocation
   * and the indirect target remain ABI_UNVERIFIED. */
  memcpy(&sample, &param_1, 4);
  
  for (node = param_1; node != (int *)0x0;
       node = (int *)(**(code **)(*node + 0x38))(node)) {
    /* 0x2ab226-2ab22c pushes an address to a four-byte output slot and
     * the node. The indirect target's complete prototype is unverified. */
    (**(code **)(*node + 0x6c))(node, &sample);
    /* 0x2ab23f-2ab24b: MAXSS(sample, running maximum). Its second
     * operand wins for unordered values and equal signed zeros. */
    maximum = _mm_cvtss_f32(_mm_max_ss(_mm_set_ss(sample),
                                      _mm_set_ss(maximum)));
    child = (int *)(**(code **)(*node + 0x30))(node);
    if (child != (int *)0x0) {
      /* 0x2ab269 FSTP rounds the recursive x87 result to binary32.
       * 0x2ab278-2ab284 then MAXSS(running maximum, child result). */
      float child_maximum = (float)FUN_002ab210(child);
      maximum = _mm_cvtss_f32(_mm_max_ss(_mm_set_ss(maximum),
                                        _mm_set_ss(child_maximum)));
    }
  }
  /* 0x2ab29e FLD reads the four-byte running maximum. */
  return (float10)maximum;
}
