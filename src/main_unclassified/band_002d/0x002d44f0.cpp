/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E14462DCA6DA6E06808A74AD2289FA584F59E15985DA4063D8D595434347E9B9
 * Entry: 0x002d44f0, Ghidra index: 10206, label: FUN_002d44f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"

void FUN_002d44f0(int param_1)
{
  uint32_t *in_EAX; /* ABI_UNVERIFIED: original incoming EAX, saved in EDI. */
  uint32_t selected, other, node_address;
  uint32_t *node_words;
  /* 0x2d4564..0x2d4638: five consecutive 16-byte stack regions.
   * Each fourth word is explicitly zeroed; the output XYZ is not initialized.
   * Six stack arguments reach the helper, including stack_vectors[4].
   * Its implicit EAX/EDX/ESI inputs still need an actual guest entry bridge. */
  float stack_vectors[5][4];
  float10 sum, threshold;

  /* 0x2d44f8..0x2d4529: two guest pointers at +ec/+f0, each header
   * SHL 28/SAR 30 sign-extends bits 2..3; ADD WORD touches ONLY +68/+69.
   * Use unsigned 16-bit wrap and preserve the neighboring high bytes. */
  for (uint32_t index = 0; index < 2; ++index) {
    uint16_t count;
    int32_t tag;
    node_address = in_EAX[0x3b + index];
    node_words = (uint32_t *)(uintptr_t)node_address;
    tag = (int32_t)((node_words[0] >> 2) & 3u);
    if ((tag & 2) != 0) tag -= 4;
    memcpy(&count,(const void *)(uintptr_t)(node_address + UINT32_C(0x68)),2);
    count = (uint16_t)(count + (uint16_t)(1 - tag));
    memcpy((void *)(uintptr_t)(node_address + UINT32_C(0x68)),&count,2);
  }
  /* 0x2d452a tests a raw DWORD at +0c, not a floating zero comparison. */
  if (in_EAX[3] != 0) {
    /* FCOMP/TEST AH,41 selects 0 only for ordered greater-than. Equal,
     * less-than and unordered select 1; the other selector is its complement. */
    selected = bf_x86_word_to_f32(in_EAX[1]) > bf_x86_word_to_f32(in_EAX[2]) ? 0u : 1u;
    other = 1u - selected;
    uint32_t *argument_word = (uint32_t *)(uintptr_t)
        ((uint32_t)param_1 + selected * UINT32_C(4));
    if ((*(const uint8_t *)(uintptr_t)*argument_word & 0x0cU) == 0) {
      stack_vectors[2][3] = 0.0f;
      stack_vectors[3][3] = 0.0f;
      stack_vectors[1][3] = 0.0f;
      stack_vectors[0][3] = 0.0f;
      memcpy(&stack_vectors[0][0],&in_EAX[other * 4 + 9],4);
      stack_vectors[0][1] = bf_x86_word_to_f32(in_EAX[other * 4 + 10]);
      stack_vectors[4][3] = 0.0f;
      stack_vectors[0][2] = bf_x86_word_to_f32(in_EAX[other * 4 + 11]);
      memcpy(&stack_vectors[1][0],&in_EAX[other * 4 + 17],4);
      stack_vectors[1][1] = bf_x86_word_to_f32(in_EAX[other * 4 + 18]);
      stack_vectors[1][2] = bf_x86_word_to_f32(in_EAX[other * 4 + 19]);
      node_words = (uint32_t *)(uintptr_t)in_EAX[selected + 0x3b];
      memcpy(&stack_vectors[3][0],&node_words[0x27],4);
      stack_vectors[3][1] = bf_x86_word_to_f32(node_words[0x28]);
      stack_vectors[3][2] = bf_x86_word_to_f32(node_words[0x29]);
      node_words = (uint32_t *)(uintptr_t)in_EAX[selected + 0x3b];
      memcpy(&stack_vectors[2][0],&node_words[0x2b],4);
      stack_vectors[2][1] = bf_x86_word_to_f32(node_words[0x2c]);
      stack_vectors[2][2] = bf_x86_word_to_f32(node_words[0x2d]);
      /* 0x2d4618/0x2d4624 load raw guest words, never floats promoted to
       * double. 0x2ba2db..0x2ba316 writes XYZ through the sixth argument.
       * ABI_UNVERIFIED: original EDX=stack_vectors[3], EAX=selected node,
       * ESI=other node are not transported by this retained ordinary C call. */
      FUN_002ba260(in_EAX[selected + 0x3d],in_EAX[other + 0x3d],
                  stack_vectors[2],stack_vectors[1],stack_vectors[0],stack_vectors[4]);
      const float *direction = (const float *)(uintptr_t)in_EAX[0x42];
      /* 0x2d463d..0x2d465f adds Y product, then Z, then X on x87.
       * float10 follows the draft convention; host extended precision,
       * control-word behavior and exceptions remain unverified. */
      sum = (float10)stack_vectors[4][1] * (float10)direction[1];
      sum += (float10)stack_vectors[4][2] * (float10)direction[2];
      sum += (float10)stack_vectors[4][0] * (float10)direction[0];
      if (selected != 0) sum *= (float10)*(const float *)(uintptr_t)UINT32_C(0x003a5000);
      threshold = (float10)bf_x86_word_to_f32(in_EAX[0]) *
                  (float10)*(const float *)(uintptr_t)UINT32_C(0x003a5350);
      if (sum < threshold) {
        /* 0x2d467c..0x2d468d: INC DWORD at first node's +0c target +64. */
        uint32_t *first_node = (uint32_t *)(uintptr_t)in_EAX[0x3b];
        uint32_t *target_word = (uint32_t *)(uintptr_t)(first_node[3] + UINT32_C(0x64));
        *target_word += UINT32_C(1);
        *argument_word = 0;
        /* Original ECX/EAX contracts of these direct calls remain unbound. */
        FUN_002d47a0();
        FUN_002d37e0();
        FUN_002d46f0(in_EAX,selected);
        /* Reload after the opaque calls (0x2d46ad), then DEC WORD only. */
        uint16_t count;
        node_address = in_EAX[selected + 0x3b];
        memcpy(&count,(const void *)(uintptr_t)(node_address + UINT32_C(0x68)),2);
        count = (uint16_t)(count - 1u);
        memcpy((void *)(uintptr_t)(node_address + UINT32_C(0x68)),&count,2);
        return;
      }
    }
  }
  FUN_002d47a0();
  FUN_002d37e0();
  FUN_002d37e0();
}
