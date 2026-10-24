/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE6FE31A3C4DB41AB1B4229F0F2898C1AB83853744DD3072E54C6A6A66A1F033
 * Entry: 0x00254390, Ghidra index: 8412, label: FUN_00254390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
/* Retail XBE: 0x2543a9 LEA EAX,[ESP+18h] addresses entry ESP+4;
 * both exits RET 4 (0x2543e9, 0x2543f6).  Guest word only;
 * virtual calls and register contracts remain unverified. */
typedef struct { undefined4 word_04; } bf_00254390_guest_record;
_Static_assert(sizeof(bf_00254390_guest_record) == 4, "ret 4 guest word");
undefined4 FUN_00254390(bf_00254390_guest_record guest_record)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 local_4;
  
  if (*(int *)(in_EAX + 0x18) != 0) {
    iVar2 = 1;
    local_4 = 0;
    (**(code **)(*DAT_004432fc + 0x24))
              (DAT_004432fc,1,&guest_record.word_04,1,&local_4,*(int *)(in_EAX + 0x18));
    if (iVar2 != 0) {
      uVar1 = (**(code **)(*DAT_004432fc + 0x3c))(DAT_004432fc);
      (**(code **)(iRam00000001 + 8))(1);
      return uVar1;
    }
  }
  *in_ECX = 0;
  return 0;
}
