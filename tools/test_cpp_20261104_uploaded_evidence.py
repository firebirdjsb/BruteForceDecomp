#!/usr/bin/env python3
"""Synthetic negative controls for private byte-evidence replay; no game bytes."""
import copy
import hashlib
import io
import unittest
import warnings
import zipfile
from verify_cpp_20261104_uploaded_evidence import collect_bytes, safe_members, verify_body, read_json

class UploadedEvidenceTests(unittest.TestCase):
    def setUp(self):
        self.expected = hashlib.sha256(bytes([1, 2, 3, 4])).hexdigest().upper()
        self.record = {'ghidra_memory_sha256': self.expected, 'body_address_count': 4,
                       'body_ranges': [{'start':'0x1000','end_inclusive':'0x1001','length':2},
                                       {'start':'0x1010','end_inclusive':'0x1011','length':2}]}
        self.ranges = ((0x1000,0x1001),(0x1010,0x1011))
        self.memory = {0x1000:1, 0x1001:2, 0x1010:3, 0x1011:4}

    def test_discontiguous_body_and_nonbody_bytes(self):
        self.memory[0x1008] = 255
        self.assertEqual(verify_body(self.record, self.memory, self.expected, self.ranges), 4)

    def test_missing_changed_bytes_and_forged_identity(self):
        for address in self.memory:
            missing = dict(self.memory); del missing[address]
            with self.assertRaises(ValueError): verify_body(self.record, missing, self.expected, self.ranges)
            changed = dict(self.memory); changed[address] ^= 1
            with self.assertRaises(ValueError): verify_body(self.record, changed, self.expected, self.ranges)
        changed = copy.deepcopy(self.record); changed['ghidra_memory_sha256'] = '0'*64
        with self.assertRaises(ValueError): verify_body(changed, self.memory, self.expected, self.ranges)

    def test_count_range_order_and_overlap_rejected(self):
        changed = copy.deepcopy(self.record); changed['body_address_count'] = 3
        with self.assertRaises(ValueError): verify_body(changed, self.memory, self.expected, self.ranges)
        for ranges in (list(reversed(self.record['body_ranges'])),
                       [self.record['body_ranges'][0]]*2):
            changed = copy.deepcopy(self.record); changed['body_ranges'] = ranges
            with self.assertRaises(ValueError): verify_body(changed, self.memory, self.expected, self.ranges)
        changed = copy.deepcopy(self.record); changed['body_ranges'][0]['length'] = 1
        with self.assertRaises(ValueError): verify_body(changed, self.memory, self.expected, self.ranges)

    def test_nested_instruction_bytes_and_conflicting_duplicates(self):
        memory = {}
        records = {'instructions':[{'address':'00001000','bytes_from_ghidra':'0102'}],
                   'windows':[{'address':'00001010','bytes':'0304'}]}
        collect_bytes(records, memory); collect_bytes(records, memory)
        self.assertEqual(memory, self.memory)
        with self.assertRaises(ValueError): collect_bytes({'address':'1000','bytes':'ff'},memory)
        with self.assertRaises(ValueError): collect_bytes({'address':'ffffffff','bytes':'0000'}, {})

    def test_relocated_bytes_and_duplicate_json_keys_rejected(self):
        relocated = copy.deepcopy(self.record)
        for span in relocated['body_ranges']:
            span['start'] = hex(int(span['start'],16)+0x2000)
            span['end_inclusive'] = hex(int(span['end_inclusive'],16)+0x2000)
        memory = {address+0x2000: value for address,value in self.memory.items()}
        with self.assertRaises(ValueError): verify_body(relocated,memory,self.expected,self.ranges)
        for text in ('{"x":1,"x":2}', '{"instructions":[],"instructions":[{}]}',
                     '{"a":{"bytes":"01","bytes":"ff"}}'):
            with self.assertRaises(ValueError): read_json(text)
        self.assertEqual(read_json('{"x":1}'), {'x':1})

    def test_byte_collection_is_bounded_to_selected_addresses(self):
        memory = {}
        collect_bytes([{'address':'1000','bytes':'0102'},{'address':'2000','bytes':'ff'}], memory, {0x1000})
        self.assertEqual(memory,{0x1000:1})

    def test_unsafe_archive_names_and_symlinks_rejected(self):
        for names in (['../escape.json'], ['/absolute.json'], ['a\\b.json'], ['same.json','same.json']):
            data=io.BytesIO()
            with warnings.catch_warnings():
                warnings.simplefilter('ignore', UserWarning)
                with zipfile.ZipFile(data,'w') as archive:
                    for name in names: archive.writestr(name,'{}')
            with zipfile.ZipFile(io.BytesIO(data.getvalue())) as archive:
                with self.assertRaises(ValueError): safe_members(archive)
        data=io.BytesIO()
        with zipfile.ZipFile(data,'w') as archive:
            info=zipfile.ZipInfo('link.json'); info.create_system=3; info.external_attr=0o120777<<16
            archive.writestr(info,'target')
        with zipfile.ZipFile(io.BytesIO(data.getvalue())) as archive:
            with self.assertRaises(ValueError): safe_members(archive)

if __name__ == '__main__': unittest.main()
