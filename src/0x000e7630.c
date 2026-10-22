/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 804CC5CD45D20E57D6200F22CF847921925F49D5F96ED6EA3E812B5DB616FF80
 * Entry: 0x000e7630, Ghidra index: 2870, label: FUN_000e7630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
uint FUN_000e7630(undefined4 param_1)

{
  uint uVar1;
  uint in_ECX;
  
  uVar1 = *(uint *)(&DAT_003bc150 +
                   (((uint)(byte)(&DAT_003bc550)[(char)param_1] ^ ~in_ECX) & 0xff) * 4) ^
          ~in_ECX >> 8;
  uVar1 = *(uint *)(&DAT_003bc150 +
                   (((byte)(&DAT_003bc550)[(char)((uint)param_1 >> 8)] ^ uVar1) & 0xff) * 4) ^
          uVar1 >> 8;
  uVar1 = *(uint *)(&DAT_003bc150 +
                   (((byte)(&DAT_003bc550)[(char)((uint)param_1 >> 0x10)] ^ uVar1) & 0xff) * 4) ^
          uVar1 >> 8;
  return ~(*(uint *)(&DAT_003bc150 +
                    (((byte)(&DAT_003bc550)[(char)((uint)param_1 >> 0x18)] ^ uVar1) & 0xff) * 4) ^
          uVar1 >> 8);
}
