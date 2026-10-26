# 0x00354FF6 partial incoming-word writes

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original body: 930 bytes, SHA-256 `31EC306F27706C405DB259A41CAECD4741A111A766267B17FB2215AA7D6B7302`.

In the EBP frame, incoming argument five occupies +0x18..0x1b and
argument six occupies +0x1c..0x1f. The original pointer is saved in ESI.
At 0x3550e5, MOV [EBP+0x1b],DL replaces only byte three with the
byte loaded from [ESI+9]. Subsequent TESTs at 0x355144/15d/176/1d7
check bits 4/4/2/0x10 of that byte. The draft retains its equivalent
whole-word masks and saved pointer; only the invalid CONCAT13/subpiece
assignment becomes an object-representation byte store.

At 0x3551cb, XOR EAX,EAX precedes AND BYTE [EBP+0x1c],AL at
0x3551cf: only the sixth argument's low byte becomes zero. The other
path writes 0x10 to that byte at 0x355368. PUSH DWORD [EBP+0x1c]
at 0x35536c passes the complete word, including unchanged high bytes.
The two invalid subpiece expressions now use explicit byte stores.

Scope is limited to these three writes. Existing unknown local_8/register
contracts, helper ABI, host/guest pointer translation, other control flow,
and runtime behavior remain unverified. No protocol behavior is invented.
The body and byte-write windows are pinned in
scripts/verify_stack_storage_repairs.py. C11 checks use sweep flags.

Independent review approved these byte operations against the pinned
instructions. Both i686 and x86_64 focused syntax checks passed. Verified
levels: A and limited B; full C and D remain unverified.
