import lit.formats

config.name = 'Word Counter'
config.test_format = lit.formats.ShTest(True)

config.suffixes = ['.md']

config.test_source_root = os.path.dirname(__file__)
config.test_exec_root = os.path.join(config.my_obj_root, 'test')

config.substitutions.append(('%counter',
    os.path.join(config.my_obj_root, 'word-counter')))
